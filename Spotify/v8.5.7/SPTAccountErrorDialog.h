//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAccountErrorModel, SPTPopupDialog;
@protocol SPTAccountErrorDialogDelegate;

@interface SPTAccountErrorDialog : NSObject
{
    SPTAccountErrorModel *_errorModel;
    id <SPTAccountErrorDialogDelegate> _delegate;
    SPTPopupDialog *_popupDialog;
}

@property(retain, nonatomic) SPTPopupDialog *popupDialog; // @synthesize popupDialog=_popupDialog;
@property(nonatomic) __weak id <SPTAccountErrorDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTAccountErrorModel *errorModel; // @synthesize errorModel=_errorModel;
- (void).cxx_destruct;
- (void)dismiss;
- (void)display;
- (id)initWithErrorModel:(id)arg1;

@end

