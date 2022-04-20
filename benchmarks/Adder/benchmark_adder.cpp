#include <vector>
#include "benchmark/benchmark.h"
#include "src/Adder/Adder.h"


static
auto benchmark_add(benchmark::State& state) -> void
{
    const std::vector<sw::Adder> adders {
        [=]()
        {
            std::vector<sw::Adder> adders;
            for (std::int64_t i { 0 }; i < state.range(0); ++i)
            {
                adders.emplace_back(i);
            }
            return adders;
        }()
    };
    for (auto _ : state)
    {
        for (const auto& adder : adders)
        {
            adder.add(12);
        }
    }
    state.SetComplexityN(state.range(0));
}


BENCHMARK(benchmark_add)->Range(8, 8<<12)->Complexity();
BENCHMARK_MAIN();
