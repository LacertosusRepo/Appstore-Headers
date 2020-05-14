//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDService.h"

@protocol IDPiaServiceDelegate;

@interface IDPiaService : IDService
{
    int _piaServiceState;
    id <IDPiaServiceDelegate> _delegate;
}

@property int piaServiceState; // @synthesize piaServiceState=_piaServiceState;
@property __weak id <IDPiaServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)requestReturnCodeForRequestReturnData:(id)arg1;
- (int)contentTypeForInputRequestData:(id)arg1;
- (void)session:(id)arg1 piaService:(long long)arg2 handlePiaEvent:(int)arg3 payload:(id)arg4;
- (_Bool)disposeWithError:(id *)arg1;
- (_Bool)exportWasSuccessful:(_Bool)arg1 error:(id *)arg2;
- (_Bool)exportFailedConfirmationWithError:(id *)arg1;
- (_Bool)exportWasSuccessfulConfirmationWithError:(id *)arg1;
- (_Bool)import:(id)arg1 error:(id *)arg2;
- (_Bool)requestWithData:(id)arg1 error:(id *)arg2;
- (_Bool)requestWithType:(int)arg1 error:(id *)arg2;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;

@end
