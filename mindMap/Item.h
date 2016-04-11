//
//  Item.h
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef Item_h
#define Item_h



@interface Item : NSObject {
    @protected
        NSString * _parentItemId;
        NSString * _parentMindMapId;
        NSString * _itemId;
        NSString * _descr;
        NSString * _content;
}

@property(readonly)  NSString * itemId;
@property(readonly)  NSString * parentItemId;
@property(readonly)  NSString * parentMindMapId;
@property(readwrite) NSString * content;
@property(readwrite) NSString * descr;


-(Item *) initWidthItemId: (NSString *)InItemId WidthInContent: (NSString *) InContent WidthInParentitemId:(NSString *)InParentItemId WidthInDescr : (NSString*)InDescr WidthInParentMindMapId:(NSString*) parentMindMapId;



@end
#endif /* Item_h */