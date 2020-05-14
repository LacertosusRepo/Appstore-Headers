//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SPTHomeMixFamilyPileConfigurator, SPTHomeMixGlueTheme, SPTHomeMixTrackViewModel, UITableView;
@protocol GLUEImageLoader;

@interface SPTHomeMixFacepileDetailCellConfigurator : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _firstAccessibilityElementDidFocus;
    SPTHomeMixGlueTheme *_theme;
    SPTHomeMixTrackViewModel *_model;
    id <GLUEImageLoader> _imageLoader;
    SPTHomeMixFamilyPileConfigurator *_facePilesConfigurator;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property _Bool firstAccessibilityElementDidFocus; // @synthesize firstAccessibilityElementDidFocus=_firstAccessibilityElementDidFocus;
@property(retain, nonatomic) SPTHomeMixFamilyPileConfigurator *facePilesConfigurator; // @synthesize facePilesConfigurator=_facePilesConfigurator;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTHomeMixTrackViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerCellsForTableView:(id)arg1;
- (id)initWithTableView:(id)arg1 theme:(id)arg2 model:(id)arg3 imageLoader:(id)arg4 facePilesConfigurator:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

