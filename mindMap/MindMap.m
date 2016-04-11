//
//  MindMap.m
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//

#import "MindMap.h"

@interface MindMap() @end

@implementation MindMap

-(MindMap *)init:(NSString *)mindMapId andUserLoginId:(NSString *)userLoginId andContent:(NSString *)content andDescr:(NSString *)descr;
{
    self = [super init];
    if (self) {
        
        self.content    =   content;
        self.descr      =   descr;
        _mindMapId      =   mindMapId;
        _userLoginId =      userLoginId;
        
    }
    return nil;
}

@end