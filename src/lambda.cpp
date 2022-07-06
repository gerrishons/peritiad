#define DECLARE_LAMBDA(NAME, RETURN_TYPE, FUNCTION) \
    struct { RETURN_TYPE operator () FUNCTION } NAME;

#include <iostream>


int main(){
  DECLARE_LAMBDA(demoLambda, void, (){ std::cout<<"I'm a lambda!"<<std::endl; });
  demoLambda();

  DECLARE_LAMBDA(plus, int, (int i, int j){
    return i+j;
  });
  std::cout << "plus(1,2)=" << plus(1,2) << std::endl;
  return 0;
}
