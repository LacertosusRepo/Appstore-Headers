//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOTokenField.h"

@class NSArray, NSString, QTMButton;

@interface SKTChipsView : GOOTokenField
{
    id <SKTChipAccessiblityActionDelegate> _chipAccessibilityActionDelegate;
    id <SKTSelectedContactsDisplayOptions> _uiOptions;
    QTMButton *_activationButton;
}

@property(retain, nonatomic) QTMButton *activationButton; // @synthesize activationButton=_activationButton;
@property(readonly, nonatomic) id <SKTSelectedContactsDisplayOptions> uiOptions; // @synthesize uiOptions=_uiOptions;
@property(nonatomic) __weak id <SKTChipAccessiblityActionDelegate> chipAccessibilityActionDelegate; // @synthesize chipAccessibilityActionDelegate=_chipAccessibilityActionDelegate;
- (void).cxx_destruct;
- (void)updateContentEdgeInsets;
- (id)placeholderStringForLabelWidth:(double)arg1;
- (void)activationButtonTapped:(id)arg1;
- (void)reloadChip:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSString *currentText;
- (id)initWithFrame:(struct CGRect)arg1 uiOptions:(id)arg2 contacts:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSArray *tokens; // @dynamic tokens;

@end
