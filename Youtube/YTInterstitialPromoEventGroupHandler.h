//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEventGroupHandler.h"

@class NSString;

@interface YTInterstitialPromoEventGroupHandler : NSObject <YTEventGroupHandler>
{
    id <YTResponder> _parentResponder;
    id <YTServices> _services;
}

@property(nonatomic) __weak id <YTServices> services; // @synthesize services=_services;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)addEventHandlers;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

