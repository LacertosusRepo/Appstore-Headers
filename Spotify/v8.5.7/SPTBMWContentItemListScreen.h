//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBMWListScreen-Protocol.h"

@class NSArray, NSString, SPTAccessory;
@protocol SPTBMWListScreenDelegate, SPTExternalIntegrationContent, SPTExternalIntegrationPlatform;

@interface SPTBMWContentItemListScreen : NSObject <SPTBMWListScreen>
{
    _Bool _didLoadContent;
    id <SPTBMWListScreenDelegate> _delegate;
    id <SPTExternalIntegrationContent> _containerContent;
    unsigned long long _level;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    NSArray *_content;
    SPTAccessory *_currentAccessory;
}

@property(readonly, nonatomic) __weak SPTAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(nonatomic) _Bool didLoadContent; // @synthesize didLoadContent=_didLoadContent;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) id <SPTExternalIntegrationContent> containerContent; // @synthesize containerContent=_containerContent;
@property(readonly, nonatomic) __weak id <SPTBMWListScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowShuffleHeader;
- (id)contentForRow:(long long)arg1;
- (_Bool)rowIsShuffleHeader:(long long)arg1;
- (void)update:(CDUnknownBlockType)arg1;
- (id)titleForGroupIndex:(long long)arg1;
- (id)titleForLine:(long long)arg1 row:(long long)arg2 groupIndex:(long long)arg3;
- (long long)targetScreenIndexForRow:(long long)arg1 groupIndex:(long long)arg2;
- (void)selectedRow:(long long)arg1 groupIndex:(long long)arg2;
- (unsigned long long)numberOfItemsForGroupIndex:(unsigned long long)arg1;
- (id)imageForRow:(long long)arg1 groupIndex:(long long)arg2 preferredSize:(struct CGSize)arg3;
@property(readonly, nonatomic) _Bool canProvideDataImmediately;
@property(readonly, nonatomic) NSString *loadingTitle;
@property(readonly, nonatomic) NSString *emptyListTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long groupCount;
- (id)initWithContent:(id)arg1 externalIntegrationPlatform:(id)arg2 level:(unsigned long long)arg3 delegate:(id)arg4 currentAccessory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

