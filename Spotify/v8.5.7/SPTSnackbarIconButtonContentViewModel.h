//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSnackbarContentViewModel-Protocol.h"

@class NSString;

@interface SPTSnackbarIconButtonContentViewModel : NSObject <SPTSnackbarContentViewModel>
{
    NSString *_text;
    long long _icon;
    CDUnknownBlockType _actionBlock;
    struct CGSize _iconSize;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (unsigned long long)snackbarType;
- (void)bindView:(id)arg1;
- (id)initWithText:(id)arg1 buttonIcon:(long long)arg2 iconSize:(struct CGSize)arg3 action:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
