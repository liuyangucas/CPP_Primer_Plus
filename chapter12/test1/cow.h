//
//  cow.h
//  Chapter12.1
//
//  Created by Yang Liu on 2020/4/18.
//  Copyright © 2020 Yang Liu. All rights reserved.
//

#ifndef COW_H_
#define COW_H_

class Cow{
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow & operator=(const Cow &c);
    void ShowCow() const;
};

#endif /* cow_h */
