//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTPodcastFilterContextAction;

@protocol SPTPodcastFilterContextActionGroup <NSObject>
@property(readonly, nonatomic) unsigned long long numberOfActions;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSString *title;
- (id <SPTPodcastFilterContextAction>)actionAtIndex:(unsigned long long)arg1;
@end

