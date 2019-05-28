#include <string>
#include <memory>


namespace A::B::D {
class Baz;
} // namespace A::B::D

namespace A::B::C {
class Bar;
class Foo_I {};
class Foo : public Foo_I
{
public:
	Foo(std::string s, uint16_t p);
	~Foo();

private:
	std::unique_ptr<D::Baz> m_db{ nullptr }; // this is ok
	std::unique_ptr<Bar> m_bar{ nullptr }; // this gives error
};
} // namespace A::B::C
