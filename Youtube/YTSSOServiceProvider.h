//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSCSSOServiceProvider.h"
#import "SRLConfigurableService.h"

@class NSString, SSOInterfaceController, SSOService, YTSSOServiceProviderOptions;

@interface YTSSOServiceProvider : NSObject <GSCSSOServiceProvider, SRLConfigurableService>
{
    YTSSOServiceProviderOptions *_options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SSOInterfaceController *ssoInterfaceController;
@property(readonly, nonatomic) SSOService *ssoService;
- (id)initWithContext:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

