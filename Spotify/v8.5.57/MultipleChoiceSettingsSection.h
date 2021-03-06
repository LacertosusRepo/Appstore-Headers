//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray;

@interface MultipleChoiceSettingsSection : SettingsSection
{
    long long _selectedChoiceIndex;
    NSArray *_cells;
}

@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(nonatomic) long long selectedChoiceIndex; // @synthesize selectedChoiceIndex=_selectedChoiceIndex;
- (void).cxx_destruct;
- (void)setAvailabilityState:(_Bool)arg1 onCell:(id)arg2;
- (void)setSelectionState:(_Bool)arg1 onCell:(id)arg2;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)reloadChoices;
- (_Bool)shouldCellBeDisabledForIndex:(long long)arg1;
- (id)subtitleForChoiceIndex:(long long)arg1;
- (id)titleForChoiceIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfChoices;
- (id)initWithSettingsViewController:(id)arg1;

@end

