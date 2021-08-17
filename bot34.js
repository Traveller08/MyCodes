const webDriver = require('selenium-webdriver');
const By = webDriver.By;
const until = webDriver.until;
const chrome = require('selenium-webdriver/chrome');
const path = require('chromedriver').path;
let opt = new chrome.Options();
let fs = require('fs');

const service = new chrome.ServiceBuilder(path).build();
chrome.setDefaultService(service);

opt.addArguments("--disable-infobars")
opt.addArguments("start-maximized")
opt.addArguments("--disable-extensions")
opt.setUserPreferences({
    "profile.default_content_setting_values.media_stream_mic": 1,
    "profile.default_content_setting_values.media_stream_camera": 1,
    "profile.default_content_setting_values.geolocation": 1,
    "profile.default_content_setting_values.notifications": 1
});

let url = 'htttp://www.webex.com/niharika';
const initdriver = () => {
    return new webDriver.Builder()
        .forBrowser('chrome')
        .setChromeOptions(opt)
        .withCapabilities(webDriver.Capabilities.chrome())
        .build();
}

const driver = initdriver();

const navigateTo = async (url) => {
    await driver.get(url);
}

try {
    (async () => {
        await driver.manage().window().maximize();
        await navigateTo(url);
        let ele = await driver.wait(until.elementLocated(By.css('#smartJoinButton')), 30000, 'Timed out after 30 seconds', 1000);
        ele.click();

        let iframe = await driver.wait(until.elementLocated(By.css('iframe[name="thinIframe"]')), 30000, 'Timed out after 30 seconds', 1000);
        await driver.switchTo().frame(iframe);

        let name = await driver.wait(until.elementLocated(By.css('*[placeholder="Your full name"]')), 30000, 'Timed out after 30 seconds', 1000);
        let email = await driver.wait(until.elementLocated(By.css('*[placeholder="Email address"]')), 30000, 'Timed out after 30 seconds', 1000);
        let nextButton = await driver.wait(until.elementLocated(By.css('#guest_next-btn')), 30000, 'Timed out after 30 seconds', 1000);

        await name.sendKeys("Lcs2019016_Narendra Singh");
        await email.sendKeys("Lcs2019016@iiitl.ac.in");
        await nextButton.click();
        await (await driver.wait(until.elementLocated(By.css('#interstitial_join_btn')), 30000, 'Timed out after 30 seconds', 1000)).click();
    })();
}
catch (err) {
    console.log(err);
    driver.quit();
}