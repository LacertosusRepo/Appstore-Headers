//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTGeniusServiceEnabledResourcesLoadingState : NSObject
{
    _Bool _loading;
    _Bool _hasLoadedOnce;
    _Bool _needsLoading;
}

@property(nonatomic) _Bool needsLoading; // @synthesize needsLoading=_needsLoading;
@property(nonatomic) _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void)loadFailed;
- (void)loadComplete;
- (void)startLoading;
- (id)init;

@end

