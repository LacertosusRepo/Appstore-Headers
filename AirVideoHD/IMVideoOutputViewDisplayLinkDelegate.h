//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMVideoOutputViewDisplayLinkDelegate : NSObject
{
    id _actualTarget;
    SEL _actualSelector;
}

@property(nonatomic) SEL actualSelector; // @synthesize actualSelector=_actualSelector;
@property(nonatomic) __weak id actualTarget; // @synthesize actualTarget=_actualTarget;
- (void).cxx_destruct;
- (void)displayLinkCallback:(id)arg1;

@end

