//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDView.h"

@class IDButton, IDImage, IDLabel, IDTable;

@interface MoreInfoScreen0View : IDView
{
    IDImage *_imageMoreInfoScreen;
    IDLabel *_labelInfoLabelFirstLine;
    IDLabel *_labelInfoLabelSecondLine;
    IDLabel *_labelInfoLabelThirdLine;
    IDTable *_table_CICHACKoptionsTable;
    IDButton *_optionsButton0;
    IDButton *_optionsButton1;
    IDButton *_optionsButton2;
}

@property(retain) IDButton *optionsButton2; // @synthesize optionsButton2=_optionsButton2;
@property(retain) IDButton *optionsButton1; // @synthesize optionsButton1=_optionsButton1;
@property(retain) IDButton *optionsButton0; // @synthesize optionsButton0=_optionsButton0;
@property(retain) IDTable *table_CICHACKoptionsTable; // @synthesize table_CICHACKoptionsTable=_table_CICHACKoptionsTable;
@property(retain) IDLabel *labelInfoLabelThirdLine; // @synthesize labelInfoLabelThirdLine=_labelInfoLabelThirdLine;
@property(retain) IDLabel *labelInfoLabelSecondLine; // @synthesize labelInfoLabelSecondLine=_labelInfoLabelSecondLine;
@property(retain) IDLabel *labelInfoLabelFirstLine; // @synthesize labelInfoLabelFirstLine=_labelInfoLabelFirstLine;
@property(retain) IDImage *imageMoreInfoScreen; // @synthesize imageMoreInfoScreen=_imageMoreInfoScreen;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 hmiProvider:(id)arg4;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

@end
