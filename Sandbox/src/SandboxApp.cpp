#include<Obscure.h>

class Sandbox : public Obscure::Application
{
	public:
		 Sandbox()
		 {

		 }

		 ~Sandbox()
		 {

		 }
};

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}