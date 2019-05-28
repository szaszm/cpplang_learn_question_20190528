#include "Foo.h"

#include <memory>

#include "Bar.h"

Foo::Foo()
{
    m_bar = std::make_unique<Bar>();    
}

Foo::~Foo() = default;