//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageBarItem;

@protocol SPTMessageBarItemDelegate <NSObject>
- (void)messageBarItemDidChange:(MessageBarItem *)arg1;
- (void)dismissMessageBarItem:(MessageBarItem *)arg1;
@end

