//
//  DataManager.h
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//
#import <Foundation/Foundation.h>

#import "MindMap.h"
#import "Item.h"


#ifndef DataManager_h
#define DataManager_h

@interface DataManager : NSObject{
    
   

}
+(DataManager *) getInstance;

-(void) addItem:(Item *)item;
-(Item *) getItem:(NSString *) itemId;
-(NSArray *) getItemsWithMindMap:(NSString *) mindMapId;
-(Item *) getParentItemWithMindMap:(NSString *) mindMapId;
-(NSArray *) getItemsWithParentItem:(NSString *) parentItemId;





@end


#endif /* DataManager_h */
