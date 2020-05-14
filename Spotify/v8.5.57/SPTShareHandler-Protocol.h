//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTShareAlertModel, SPTShareData, SPTSharePresenter;
@protocol SPTShareDeeplinkHandler, SPTShareDestination;

@protocol SPTShareHandler <NSObject>
@property(readonly, nonatomic) NSString *utmContent;
@property(readonly, nonatomic) NSString *utmTerm;
@property(readonly, nonatomic) NSString *utmCampaign;
@property(readonly, nonatomic) NSString *utmMedium;
@property(readonly, copy, nonatomic) NSString *utmSource;
- (SPTShareAlertModel *)provideShareAlertModelForError:(NSError *)arg1;
- (void)shareWithData:(SPTShareData *)arg1 shareDestination:(id <SPTShareDestination>)arg2 sharePresenter:(SPTSharePresenter *)arg3 deeplinkHandler:(id <SPTShareDeeplinkHandler>)arg4 completion:(void (^)(NSError *, id <SPTShareHandlerCompletionData>))arg5;
@end
