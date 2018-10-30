Skip to content


  
Pull requests 
Issues 
Marketplace 
Explore 
 


Sign out 


 Watch 
25 
 Star 
98 
 Fork 
18 

RainerGrimm/ModernesCppSource 
 Code 
 Issues 0 
 Pull requests 0 
 Projects 0 
 Wiki 
 Insights 
Branch: master 
Find file 
Copy path 
ModernesCppSource/source/crtp.cpp 
ad22dce on Feb 15 2017 
 RainerGrimm Missing source files added. 
1 contributor 
 
Raw
Blame
History
   
51 lines (36 sloc) 765 Bytes 

// crtp.cpp



#include <iostream>



template <typename Derived>

struct Base{

  void interface(){

    static_cast<Derived*>(this)->implementation();

  }

  void implementation(){

    std::cout << "Implementation Base" << std::endl;

  }

};



struct Derived1: Base<Derived1>{

  void implementation(){

    std::cout << "Implementation Derived1" << std::endl;

  }

};



struct Derived2: Base<Derived2>{

  void implementation(){

    std::cout << "Implementation Derived2" << std::endl;

  }

};



struct Derived3: Base<Derived3>{};



template <typename T>

void execute(T& base){

    base.interface();

}





int main(){

  

  std::cout << std::endl;

  

  Derived1 d1;

  execute(d1);

    

  Derived2 d2;

  execute(d2);

  

  Derived3 d3;

  execute(d3);

  

  std::cout << std::endl;

  

}

© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
 
Contact GitHub
Pricing
API
Training
Blog
About

Press h to open a hovercard with more details. 
