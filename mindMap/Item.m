//
//  Item.m
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//

#import "Item.h"



@implementation Item

-(Item *) initWidthItemId: (NSString *)InItemId WidthInContent: (NSString *) InContent WidthInParentitemId:(NSString *)InParentItemId WidthInDescr : (NSString*)InDescr WidthInParentMindMapId:(NSString*) InParentMindMapId{
    

    self = [super init];
    
    if(self){
        self.content =  InContent;
        self.descr =    InDescr;
        
        _itemId =           InItemId;
        _parentMindMapId =  InParentMindMapId;
        _parentItemId =     InItemId;
        
        return self; }
    return nil;
}



@end