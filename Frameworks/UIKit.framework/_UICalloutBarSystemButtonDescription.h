/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {
    SEL m_action;
    id m_configurationBlock;
    UIImage *m_image;
    NSString *m_title;
    int m_type;
}

@property(readonly) SEL action;
@property(copy) id configurationBlock;

+ (id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
+ (id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;

- (SEL)action;
- (id)configurationBlock;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4;
- (id)materializeButtonInView:(id)arg1;
- (void)setConfigurationBlock:(id)arg1;

@end