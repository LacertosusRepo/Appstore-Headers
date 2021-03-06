//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, SPTInfoView;
@protocol SPTCollectionLogger;

@interface SPTCollectionFilterTableFooterView : UIView
{
    SPTInfoView *_infoView;
    NSURL *_pageURI;
    id <SPTCollectionLogger> _logger;
}

+ (double)collectionFilterTableFooterViewPreferredHeight;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
- (void).cxx_destruct;
- (void)logFilterResetButton;
- (id)initWithWidth:(double)arg1 target:(id)arg2 selector:(SEL)arg3 pageURI:(id)arg4 collectionLogger:(id)arg5;

@end

