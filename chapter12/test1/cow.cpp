//
//  cow.cpp
//  Chapter12.1
//
//  Created by Yang Liu on 2020/4/18.
//  Copyright © 2020 Yang Liu. All rights reserved.
//

#include"cow.h"
#include<iostream>
#include<cstring>

Cow::Cow(){
    name[0]='\0';
    hobby=new char[1];
    hobby[0]='\0';
    weight=0;
}

Cow::Cow(const char *nm, const char *ho, double wt){
    std::strcpy(name,nm);
    size_t len;
    len = std::strlen(ho);
    hobby = new char[len+1];
    std::strcpy(hobby,ho);
    weight=wt;
}

Cow::Cow(const Cow &c){
    std::strcpy(name,c.name);
    size_t len=std::strlen(c.hobby);
    hobby = new char[len+1];
    std::strcpy(hobby,c.hobby);
    weight=c.weight;
}

Cow::~Cow(){
    delete [] hobby;
}

Cow & Cow::operator=(const Cow &c){
    size_t len;
    if(this == &c)
        return *this;
    delete [] hobby;
    weight = c.weight;
    len = std::strlen(c.hobby);
    hobby = new char[len+1];
    std::strcpy(hobby,c.hobby);
    std::strcpy(name,c.name);
    return *this;
}

void Cow::ShowCow() const{
    using std::cout;
    using std::endl;
    cout<<"name: "<<this->name<<endl;
    cout<<"hobby: "<< this->hobby<<endl;
    cout<<"weight: "<<this->weight<<endl;
    cout<<endl;
}

