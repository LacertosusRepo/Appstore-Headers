//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKTSendKitCoreService.h"
#import "SRLService.h"

@class GOOProvider, NSString, SKTExperimentFlagsProvider;

@interface SKTSendKitCoreServiceImpl : NSObject <SRLService, SKTSendKitCoreService>
{
    id <PDLClientInfoProvider> _clientInfoProvider;
    GOOProvider *_aveLoggingServiceProvider;
    GOOProvider *_addressBookServiceProvider;
    GOOProvider *_clearcutLoggerProvider;
    GOOProvider *_peopleDataServiceProvider;
    SKTExperimentFlagsProvider *_experimentFlagsProvider;
}

@property(readonly, nonatomic) SKTExperimentFlagsProvider *experimentFlagsProvider; // @synthesize experimentFlagsProvider=_experimentFlagsProvider;
- (void).cxx_destruct;
- (id)analyticsProviderWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)stringOverrides;
- (void)setStringOverrides:(id)arg1;
- (id)selectedContactsViewControllerWithOptions:(id)arg1;
- (id)maximizedViewControllerWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)initWithAccountID:(id)arg1 clientInfoProvider:(id)arg2 addressBookServiceProvider:(id)arg3 aveLoggingServiceProvider:(id)arg4 clearcutLoggerProvider:(id)arg5 peopleDataServiceProvider:(id)arg6;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

