//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray;

@interface VersionSettingsSection : SettingsSection
{
    NSArray *_cells;
}

@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1;

@end

