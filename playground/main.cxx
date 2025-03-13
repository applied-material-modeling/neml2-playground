#include "neml2/models/Model.h"

using namespace neml2;

int
main()
{
  auto & model = load_model("input.i", "my_model");
  std::cout << model << std::endl;
}
