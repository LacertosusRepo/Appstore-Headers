//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTYourLibraryLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithSectionId:(id)arg1 itemIndex:(long long)arg2 targetURI:(id)arg3 interactionType:(id)arg4 userIntent:(id)arg5;
- (void)logUIImpressionWithSectionId:(id)arg1 index:(long long)arg2 renderType:(id)arg3;
- (void)logImpressionForPage:(id)arg1 index:(long long)arg2;
- (void)logSelectedTabIndex:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2;
- (void)logSelectedGroupIndex:(unsigned long long)arg1;
- (id)initWithLogCenter:(id)arg1;

@end
