//
//  RSSParser.h
//
//  Created by Mike Mayo on 1/28/10.
//  Copyright Mike Mayo 2010. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FeedItem;

@interface RSSParser : NSObject {
	NSMutableString *currentElementValue;
	NSString *currentDataType;
	FeedItem *feedItem;
	NSMutableArray *feedItems;
	BOOL parsingItem;
    BOOL parsingContent;
}

@property (nonatomic, strong) FeedItem *feedItem;
@property (nonatomic, strong) NSString *currentDataType;
@property (nonatomic, strong) NSMutableArray *feedItems;

@end
