//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "GLUEStyleable.h"

@class GLUELabelStyle, NSString;

@interface GLUELabel : UILabel <GLUEStyleable>
{
    GLUELabelStyle *_glueStyle;
    NSString *_originalString;
}

@property(copy, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(copy, nonatomic) GLUELabelStyle *glueStyle; // @synthesize glueStyle=_glueStyle;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (double)calculateKerningWithMaxWidth:(double)arg1 minKerning:(double)arg2;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setText:(id)arg1 imageAttachment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

