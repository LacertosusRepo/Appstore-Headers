//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActionSheet;

@interface IMActionSheet : NSObject <UIActionSheetDelegate>
{
    UIActionSheet *actionSheet;
    NSMutableArray *blocks;
    IMActionSheet *reference;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1;
@property(readonly, nonatomic) long long numberOfButtons; // @dynamic numberOfButtons;
- (_Bool)isVisible;
@property(nonatomic) long long destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex;
- (long long)addButtonWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool visible; // @dynamic visible;

@end

