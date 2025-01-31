// Copyright (c) Yugabyte, Inc.

package com.yugabyte.yw.forms;

import com.yugabyte.yw.models.CertificateInfo;
import play.data.validation.Constraints;

/**
 * This class will be used by the API and UI Form Elements to validate constraints for the custom
 * certificate Data.
 */
public class CertificateParams {
  @Constraints.Required() public String label;

  @Constraints.Required() public long certStart;

  @Constraints.Required() public long certExpiry;

  @Constraints.Required() public String certContent;

  public String keyContent;

  public CertificateInfo.Type certType = CertificateInfo.Type.SelfSigned;

  public static class CustomCertInfo {
    public String nodeCertPath;
    public String nodeKeyPath;
    public String rootCertPath;
    public String clientCertPath;
    public String clientKeyPath;
  }

  public CustomCertInfo customCertInfo;

  public static class CustomServerCertData {
    public String serverCertContent;
    public String serverKeyContent;
  }

  public CustomServerCertData customServerCertData;
}
