//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString;

@interface UITableView (GLUEStyleable) <GLUEStyleable>
- (void)glue_applyStyle:(id)arg1;
- (id)spt_firstVisibleIndexPathAtOffset:(double)arg1;
- (void)insertRowAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeRowAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

