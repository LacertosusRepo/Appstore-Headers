//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HUBInitialViewModelRegistry : NSObject
{
    NSMutableDictionary *_initialViewModels;
}

@property(readonly, nonatomic) NSMutableDictionary *initialViewModels; // @synthesize initialViewModels=_initialViewModels;
- (void).cxx_destruct;
- (id)initialViewModelForViewURI:(id)arg1;
- (void)removeInitialViewModelForViewURI:(id)arg1;
- (void)registerInitialViewModel:(id)arg1 forViewURI:(id)arg2;
- (id)init;

@end

