//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDPopupView.h"

@class IDLabel, IDTable;

@interface IDRhmiConnectedAppsView : IDPopupView
{
    IDLabel *_disconnectAppLabel;
    IDTable *_connectedAppsList;
}

@property(retain) IDTable *connectedAppsList; // @synthesize connectedAppsList=_connectedAppsList;
@property(retain) IDLabel *disconnectAppLabel; // @synthesize disconnectAppLabel=_disconnectAppLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4 hmiProvider:(id)arg5;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4;

@end

