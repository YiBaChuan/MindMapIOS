//
//  MindMap.h
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//
#import <Foundation/Foundation.h>

#ifndef MindMap_h
#define MindMap_h

@interface MindMap : NSObject{
@protected
    NSString * _mindMapId;
    NSString * _userLoginId;
    NSString * _content;
    NSString * _descr;
}

@property(readonly)     NSString * mindMapId;
@property(readonly)     NSString * userLoginId;
@property(readwrite)    NSString * content;
@property(readwrite)    NSString * descr;



-(MindMap *)init:(NSString *)mindMapId andUserLoginId:(NSString *)userLoginId andContent:(NSString *)content andDescr:(NSString *)descr;




@end


#endif /* MindMap_h */
