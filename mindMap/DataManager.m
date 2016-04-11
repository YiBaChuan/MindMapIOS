//
//  DataManager.m
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//

#import "DataManager.h"

@interface DataManager() @end


@implementation DataManager


+(DataManager *)getInstance{
    
    static DataManager * instansce = nil;
    
    
        @synchronized([DataManager class]) {
        
            if(instansce == nil){  if(instansce == nil){                instansce = [[DataManager alloc]init];
            }
                return instansce;
        }
        return nil;
        }
}

@end