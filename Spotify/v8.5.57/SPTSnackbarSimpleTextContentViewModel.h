//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSnackbarContentViewModel-Protocol.h"

@class NSString;

@interface SPTSnackbarSimpleTextContentViewModel : NSObject <SPTSnackbarContentViewModel>
{
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (unsigned long long)snackbarType;
- (void)bindView:(id)arg1;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

