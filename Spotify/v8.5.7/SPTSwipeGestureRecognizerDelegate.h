//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol SPTTableViewCellInformationProvider;

@interface SPTSwipeGestureRecognizerDelegate : NSObject <UIGestureRecognizerDelegate>
{
    id <SPTTableViewCellInformationProvider> _cellInformationProvider;
}

@property(nonatomic) __weak id <SPTTableViewCellInformationProvider> cellInformationProvider; // @synthesize cellInformationProvider=_cellInformationProvider;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

