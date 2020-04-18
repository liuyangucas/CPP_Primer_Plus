//
//  test1.cpp
//  Chapter12.1
//
//  Created by Yang Liu on 2020/4/18.
//  Copyright © 2020 Yang Liu. All rights reserved.
//

#include <iostream>
#include"cow.h"
int main(){
    using namespace std;
    Cow case1;
    case1.ShowCow();
    Cow case2("ahhh","playing", 200);
    case2.ShowCow();
    Cow case3("tired.","sleeping",2130.2);
    case3.ShowCow();
    case1=case3;
    case1.ShowCow();
    return 0;
}
