//
//  FeedItem.h
//
//  Created by Mike Mayo on 1/28/10.
//  Copyright Mike Mayo 2010. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface FeedItem : NSObject {

	NSString *title;
	NSString *link;
	NSString *guid;
	NSString *description;
	NSString *content;
	NSString *creator;
	NSDate *pubDate;
		
}

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *link;
@property (nonatomic, strong) NSString *guid;
@property (nonatomic, strong) NSString *description;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *creator;
@property (nonatomic, strong) NSDate *pubDate;

- (NSComparisonResult)compare:(FeedItem *)anotherFeedItem;

@end
