%module GenericAdder
%{
#include "src/GenericAdder/GenericAdder.h"
%}

%include "GenericAdder.h"
%template(IntGenericAdder) sw::GenericAdder<int>;
