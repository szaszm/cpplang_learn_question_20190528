#include <memory>

// #include "Bar.h" // Comment this out for forward declaration

class Bar; // Un-comment for forward declaration
class Foo
{
public:
	Foo();
	~Foo();

private:
	std::unique_ptr<Bar> m_bar{ nullptr };
};
