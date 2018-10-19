//
//  HCDMacroNeddCombinate.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/18.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroNeddCombinate_h
#define HCDMacroNeddCombinate_h

#import "HCDMacroDevice.h"
#import "HCDMacroSize.h"

#define kSafeTop (kIsIphoneXScreen ?kSafeAreaInsets.top:20)
#define kSafeBottom (kIsIphoneXScreen ?kSafeAreaInsets.bottom:0)
#define kSafeLeft (kIsIphoneXScreen ?kSafeAreaInsets.left:0)
#define kSafeRight (kIsIphoneXScreen ?kSafeAreaInsets.right:0)

/**
 状态栏高度，考虑显示或隐藏状态
 刘海屏横屏时，状态栏不显示
 设备未被识别，将返回0
 */
#define kStatusBarHeight \
^(){\
if (kIsIphoneXScreen) {\
if (UIInterfaceOrientationIsLandscape(kCurrentOrientation)) {\
return 0;\
}\
return [UIApplication sharedApplication].statusBarHidden?0:44;\
} else {\
return [UIApplication sharedApplication].statusBarHidden?0:20;\
}\
return 0;\
}()

/**
 导航栏高度
 设备未被识别，将返回0
 */
#define kNavBarHeight \
^(){\
if (kIsIPad) {\
return 50;\
} else {\
if (kIsIphoneXScreen) {\
if (kiPhoneX) {\
return  UIInterfaceOrientationIsLandscape(kCurrentOrientation) ? 32:44;\
} else if (kiPhoneXR){\
return 44;\
}\
} else if (kiPhone4 || kiPhone5 || kiPhone6) {\
return UIInterfaceOrientationIsLandscape(kCurrentOrientation) ? 32:44;\
} else if (kiPhone6Plus) {\
return 44;\
}\
}\
return 0;\
}()

/**
 标签栏高度
 */
#define kTabBarHeight \
^(){\
if (kIsIPad) {\
return 50;\
} else {\
if (kIsIphoneXScreen) {\
if (kiPhoneX) {\
return  UIInterfaceOrientationIsLandscape(kCurrentOrientation) ? 53:83;\
} else if (kiPhoneXR){\
return UIInterfaceOrientationIsLandscape(kCurrentOrientation) ? 70:83;\
}\
} else if (kiPhone4 || kiPhone5 || kiPhone6) {\
return UIInterfaceOrientationIsLandscape(kCurrentOrientation) ? 32:49;\
} else if (kiPhone6Plus) {\
return 49;\
}\
}\
return 0;\
}()

#endif /* HCDMacroNeddCombinate_h */
