//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBContentOperationDelegate.h"

@interface HUBContentOperationWrapper : NSObject <HUBContentOperationDelegate>
{
    _Bool _isExecuting;
    id <HUBContentOperationWrapperDelegate> _delegate;
    unsigned long long _index;
    id <HUBContentOperation> _contentOperation;
}

@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(readonly, nonatomic) id <HUBContentOperation> contentOperation; // @synthesize contentOperation=_contentOperation;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <HUBContentOperationWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)contentOperationRequiresRescheduling:(id)arg1;
- (void)contentOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)contentOperationDidFinish:(id)arg1;
- (void)performOperationForViewURI:(id)arg1 featureInfo:(id)arg2 connectivityState:(unsigned long long)arg3 viewModelBuilder:(id)arg4 pageIndex:(id)arg5 previousError:(id)arg6;
- (id)initWithContentOperation:(id)arg1 index:(unsigned long long)arg2;

@end

