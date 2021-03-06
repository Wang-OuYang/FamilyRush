//
//  Role.hpp
//  FamilyRush
//
//  Created by 欧阳望 on 16/4/11.
//
//

/*
    this class need to repaired at last
    get more suit function instand it
 */

#ifndef Role_hpp
#define Role_hpp

#include <stdio.h>

#include "cocos2d.h"
#include "RoleSprite.hpp"
using namespace cocos2d;

#include "RoleInfo.h"

class Role : public RoleSprite
{
public:
    Role();
    virtual ~Role();
    
    Role* createRole(RoleType _roleType);
    
    
    
    void initAnimation();
    
public:
    virtual bool initRoleInfo() = 0;
    
    virtual void getRoleState();
    virtual void roleHurt(float& _damage);
    virtual float getRoleHP();
    virtual cocos2d::Rect getRoleCollideRect();
};

#endif /* Role_hpp */
