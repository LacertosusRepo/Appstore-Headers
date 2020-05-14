//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEReusable-Protocol.h"
#import "GLUEStatefulItem-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUEEntityRowStyle, UIView;
@protocol GLUEEntityRowContent;

@protocol GLUEEntityRow <GLUEStatefulItem, GLUEStyleable, GLUEReusable>
@property(retain, nonatomic) UIView *trailingAccessoryView;
@property(retain, nonatomic) UIView<GLUEEntityRowContent> *entityContentView;
@property(retain, nonatomic) UIView *leadingAccessoryView;
- (void)glue_applyStyle:(GLUEEntityRowStyle *)arg1;
@end

