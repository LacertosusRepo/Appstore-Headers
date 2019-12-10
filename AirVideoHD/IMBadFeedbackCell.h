//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBaseFeedbackCell.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class IMButton, MFMailComposeViewController, NSString, UILabel;

@interface IMBadFeedbackCell : IMBaseFeedbackCell <MFMailComposeViewControllerDelegate>
{
    UILabel *label;
    IMButton *yes;
    IMButton *no;
    MFMailComposeViewController *mailController;
}

- (void).cxx_destruct;
- (id)layout;
- (void)closeButtonTapped:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)emailButtonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

